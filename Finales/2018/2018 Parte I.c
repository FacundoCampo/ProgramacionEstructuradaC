int bit (unsigned int n)
{
    unsigned int mask1=7<<5;
    unsigned int mask2=7;
    if(n&(mask1|mask2) == n)
        return 1;
    else
        return 0;
}
int main()
{
    printf("%d",bit(231));
	return 0;
}

