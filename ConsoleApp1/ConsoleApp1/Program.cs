using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    internal class Program
    {
        delegate void myDelegate();
        delegate int cal(int x, int y);
        delegate int opertion(cal cal,int x , int y);
        static void D()
        {
            Console.WriteLine("Hello");
        }
        static async Task<int> methodA()
        {
            Console.WriteLine("A start");
            await Task.Delay(5000);
            Console.WriteLine("A End");
            return 1;
        }
        static async Task<int> methodB()
        {
            Console.WriteLine("B start");
            await Task.Delay(3000);
            Console.WriteLine("B End");
            return 2;
        }
        static async Task<int> methodC()
        {
            Console.WriteLine("C start");
            await Task.Delay(2000);
            Console.WriteLine("C End");
            return 3;
        }
        static async Task Main(string[] args)
        {

            /*var time = Stopwatch.StartNew();
            time.Start();

            var a = methodA();
            var b = methodB();
            Console.WriteLine(await a);
            var c = methodC();
            Console.WriteLine(time.Elapsed.Seconds);
            int a1 = int.Parse(Console.ReadLine());*/
            myDelegate d1 = D;
            d1();
            myDelegate d2 = () =>
            {
                Console.WriteLine("D2");
            };
            cal add = delegate (int x, int y)
            {
                return x + y;
            };
            cal mul = (x, y) =>
            {
                return x * y;
            };
            cal div = (x, y) => x / y;
            Console.WriteLine(mul(12, 12));
            opertion op = (oper, x, y) =>
            {
                return oper(x, y);
            };
            Console.WriteLine(op(mul, 10, 5));
            Console.ReadLine();


        }
    }
}
