#include <iostream>
#include <unordered_map>

int main()
{
    //The output is not reasonable
    // 40 50 20 40 20 30 30
    // 40 occured 1 times
    //50 occured 1 times
    //20 occured 1 times
    //40 occured 1 times
    //20 occured 1 times
    //30 occured 2 times
    /*int curVal = 0, val = 0;

    if (std::cin >> curVal)
    {
        int cnt = 1;
        while (std::cin >> val)
        {
            if (val == curVal)
            {
                ++cnt;
            }
            else
            {
                std::cout << curVal << " occured " << cnt << " times " << std::endl;
                curVal = val;
                cnt = 1;
            }
        }
        std::cout << curVal << " occured " << cnt << " times " << std::endl;
    }
*/
    std::unordered_map<int, int> hashMap;
    int val = 0;

    while (std::cin >> val)
    {
        hashMap[val]++;
    }

    std::unordered_map<int, int>::iterator iter = hashMap.begin();
    for (;iter != hashMap.end(); ++iter)
    {
        std::cout << (*iter).first << " occured " << (*iter).second << " times " << std::endl;
    }
    

    return 0;
}