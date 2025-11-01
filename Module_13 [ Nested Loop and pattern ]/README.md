🧾 README.md
# 🧠 C Pattern & Basic Problem Assignment

এই প্রজেক্টে **C ভাষার বেসিক প্যাটার্ন প্রিন্টিং এবং অ্যালগরিদমিক প্রোগ্রামিং**   
সব কোডই হাতে লিখে শেখার উপযোগী, যাতে `for loop`, `nested loop`, `condition` এবং `array` সম্পর্কে ভালো ধারণা তৈরি হয়।

---

📘 Pattern Programs
⭐ 1. Basic Star Pattern (Left-Aligned)
// *
// **
// ***

#include<stdio.h>
int main()
{
    int n, star = 1;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<star; j++)
        {
            printf("*");
        }
        printf("\n");
        star++;
    }
    return 0;
}


🧩 Explanation:
প্রতিটি লাইন শেষে \n নতুন লাইন তৈরি করে।
star ভেরিয়েবল প্রতি লাইনে ১ করে বাড়ে, তাই স্টার বাড়ে ধাপে ধাপে।

🔻 2. Reverse Star Pattern
***
**
*

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int star = n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<star;j++)
        {
            printf("*");
        }
        printf("\n");
        star--;
    }
    return 0;
}


🧩 Explanation:
প্রথমে star = n, তারপর প্রতি লাইনে ১ করে কমে — তাই তারকা উল্টো ক্রমে কমতে থাকে।

🔺 3. Pyramid Pattern
//     *
//    ***
//   *****
//  *******
// *********

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int star=1, spes=n-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<spes;j++)
        {
            printf(" ");
        }
        for(int j=0;j<star;j++)
        {
            printf("*");
        }
        printf("\n");
        star+=2;
        spes--;
    }
    return 0;
}


🧩 Explanation:
প্রতিটি লাইনে আগে spes সংখ্যক স্পেস প্রিন্ট করে, তারপর star সংখ্যক তারকা।
তারপর spes কমে, star বাড়ে — ফলে পিরামিড আকার তৈরি হয়।

🔻 4. Inverted Pyramid
*********
 *******
  *****
   ***
    *

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int star=2*n-1, spes=0;
    for(int i=n;i>=1;i--)
    {
        for(int j=0;j<spes;j++)
        {
            printf(" ");
        }
        for(int j=0;j<star;j++)
        {
            printf("*");
        }
        printf("\n");
        star-=2;
        spes++;
    }
    return 0;
}


🧩 Explanation:
এটা আগেরটার উল্টো সংস্করণ — star কমছে আর spes বাড়ছে।

🔷 5. Diamond Pattern
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *


Logic: প্রথম অংশে Pyramid, দ্বিতীয় অংশে Inverted Pyramid।

📈 6. Right-Aligned Triangle
    *
   **
  ***
 ****
*****


Explanation: প্রতি লাইনে আগেরটার চেয়ে এক স্পেস কমে, আর স্টার ১ করে বাড়ে।

🔢 7. Number Triangle
1
12
123
1234
12345

#include<stdio.h>
int main()
{
    int n, valu=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=valu;j++)
        {
            printf("%d",j);
        }
        printf("\n");
        valu++;
    }
    return 0;
}


🧩 Explanation:
প্রতিটি লাইনে ১ থেকে শুরু করে valu পর্যন্ত সংখ্যা প্রিন্ট করে।

🔺 8. Centered Number Pyramid
    1 
   1 2 
  1 2 3 
 1 2 3 4 
1 2 3 4 5 


Explanation: প্রতিটি লাইনে আগে স্পেস প্রিন্ট করে তারপর ক্রমানুসারে সংখ্যা।
এইভাবে পিরামিড আকৃতি তৈরি হয়।

🔻 9. Reverse Number Pattern
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1


Explanation: valu প্রথমে n, পরে প্রতি লাইন শেষে ১ করে কমে।

🔺 10. Full Number Pyramid
    1
   123
  12345
 1234567
123456789


Explanation: পিরামিড তৈরি হয় spes কমে আর valu ২ করে বাড়তে থাকায়।

⚙️ Algorithm Programs
🧮 Sum Pair Check

Input:

4
5 3 2 6
9


Output:

yes
5 + 4 = 9


Logic:
দুইটি সংখ্যার যোগফল ইনপুট x এর সমান কিনা তা ডাবল লুপ ব্যবহার করে চেক করা হয়।

🧩 Selection Sort (Descending Order)

Input:

4
5 3 2 6


Output:

Sorted from Descending (largest to smallest)
6 5 3 2


Explanation:
প্রতিটি ইটারেশনে সবচেয়ে বড় সংখ্যাটা শুরুতে চলে আসে।
if(a[i] < a[j]) হলে swap করা হয়।

🧷 Summary

এই প্রোগ্রামগুলোতে তুমি যা শিখবে:

Nested for loop দিয়ে প্যাটার্ন বানানো

Variable increment/decrement ধারণা

Number alignment ও space control

Double loop algorithm

Selection sort এবং pair sum concept


📘 Prepared by: Montasir 
🎓 Course: C Programming (Pattern & Basic Algorithm Practice)
🗓️ Session: 2025

