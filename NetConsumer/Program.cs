using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NetConsumer
{
    class Program
    {
        static void Main(string[] args)
        {
            var wrapper = new CCLIWrapperToOpenCV.ImageLoader();
            wrapper.LoadImage();
        }
    }
}
