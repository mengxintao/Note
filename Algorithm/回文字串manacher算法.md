int MANACHER(char *str)
{
    int mx = 0, ans = 0, po = 0;//mx即为当前计算回文串最右边字符的最大值
        int i, len = strlen(str);
        char tmp[2*len+1];
        for (i = 0; i <= 2*len-1; i += 2)
        {
            tmp[i] = '#';
            tmp[i + 1] = str[i / 2];
        }
        tmp[2 * len ] = '#';
        len=2*len+1；
        
    for (int i = 0; i <= len; i++)
    {
        if (mx > i)
            Len[i] = min(mx - i, Len[2 * po - i]);//在Len[j]和mx-i中取个小
        else
            Len[i] = 1;//如果i>=mx，要从头开始匹配
        while (tmp[i - Len[i]] == tmp[i + Len[i]])
            Len[i]++;
        if (Len[i] + i > mx)//若新计算的回文串右端点位置大于mx，要更新po和mx的值
        {
            mx = Len[i] + i;
            po = i;
        }
        ans = max(ans, Len[i]);
    }
    return ans - 1;//返回Len[i]中的最大值-1即为原串的最长回文子串额长度
}
