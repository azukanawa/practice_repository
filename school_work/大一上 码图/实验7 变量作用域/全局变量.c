extern int max_val, min_val, ave_val;
int cal(int *pData, int iLen);

int cal(int *pData, int iLen)
{
    int i = 0;
    int sum = 0;
    if (pData == 0 || iLen <= 0)
    {
        return 0;
    }
    max_val = *(pData + i);

    min_val = *(pData + i);
    for (i = 0; i < iLen; i++)
    {
        sum += *(pData + i);
        if (*(pData + i) > max_val)
        {
            max_val = *(pData + i);
        }
        if (*(pData + i) < min_val)
        {
            min_val = *(pData + i);
        }
    }
    ave_val = sum / iLen;
    return 1;
}