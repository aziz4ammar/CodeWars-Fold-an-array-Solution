#include <vector>

class Kata
{
public:
    std::vector<int> foldArray(std::vector<int> array, int runs)
    {
        while (runs--)
        {
            std::vector<int> foldedArray;
            int size = array.size();

            for (int i = 0; i < size / 2; i++)
            {
                foldedArray.push_back(array[i] + array[size - i - 1]);
            }

            if (size % 2 != 0)
            {
                foldedArray.push_back(array[size / 2]);
            }

            array = foldedArray;
        }

        return array;
    }
};