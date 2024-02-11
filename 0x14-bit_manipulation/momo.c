#include <stdio.h>

int get_bit(unsigned long int n, unsigned int index) {
    // التأكد من أن المؤشر صالح
    if (index >= sizeof(unsigned long int) * 8) {
        return -1; // خطأ: المؤشر خارج النطاق
    }

    // نقوم بإلغاء تفعيل جميع البتات باستخدام عملية XOR
    // باستخدام 1 متحرك إلى اليمين بمقدار index
    unsigned long int mask = 1UL << index;

    // نقوم بمقارنة البت المطلوب باستخدام عملية الـ AND
    // وإرجاع القيمة المناسبة (0 أو 1)
    return (n & mask) ? 1 : 0;
}

/*int main() {
    unsigned long int number = 42; // يمكنك تغيير هذا الرقم حسب الحاجة
    unsigned int bit_index = 3;    // يمكنك تغيير هذا المؤشر حسب الحاجة

    int result = get_bit(number, bit_index);

    if (result != -1) {
        printf("قيمة البت في المؤشر %u هي: %d\n", bit_index, result);
    } else {
        printf("حدث خطأ: المؤشر خارج النطاق\n");
    }

    return 0;
}*/
