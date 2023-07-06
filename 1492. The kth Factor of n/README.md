# 1492. The kth Factor of n
> First solution:
>> 1. 從數字1到n，找出為factor of n者，放入vector array裡面。  
>> 2. 取出k-th factor回傳  

> Second solution:
>> 1. 因為factor list其實可以由錢辦建立出後半 (i * n/i = n)，所以只需要從i找到sqrt(n)即可  
>> 2. 此做法可以大大降低建立factor list的時間複雜度 < O(N)