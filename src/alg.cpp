// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
        int i = 0;
        int j = size - 1;
        int count = 0;
        while (j > i) {
                int center = (i + j) / 2;
                if (arr[center] < value)
                        i = center + 1;
                else
                        j = center;
                if (arr[i] == value) {
                        while (arr[i] == value) {
                                count++;
                                j++;
                        }
                }
        }
        if (count != 0)
                return count;
        else
                return 0; // если ничего не найдено
}
