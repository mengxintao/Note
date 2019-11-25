//利用长度相等的两排序数组的上中位数getupmedian

int findk(int []arr1,int []arr2,int k)
{
    if(arr1== nullptr||arr2==nullptr)
        throw new RuntimeException();
    if(k<1||k>arr1.length+arr2.length())
        throw new RuntimeException();
    int longs=ar1.length()>=arr2.length()? arr1:arr2;
    int shorts=ar1.length()<arr2.length()? arr1:arr2;
    int l=longs.length();
    int s=shorts.length();
    if(k<=s)
    {
        return getupmedian(shorts,0,k-1,longs,0,k-1)
    }
    if(k>l)
    {
        if(shorts[k-l-1]>=longs[l-1])
            return shorts[k-l-1];
        if(shorts[s-1]<=ongs[k-s-1])
            return longs[k-s-1];
        return getupmedian(shorts,k-l,s-1,longs,k-s,l-1);
    }
    if(longs[k-s-1]>=shorts[s-1])
    {return longs[k-s-1];
    }
    return getupmedian(shorts,0,s-1,longs,k-s,k-1);
}
