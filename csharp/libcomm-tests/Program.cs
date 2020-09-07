using comm;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace libcomm_tests
{
    class Program
    {
        static void Main(string[] args)
        {
            RESTClient client = new RESTClient("uofmrestraspberrypi.local", 8091, CommunicationDefinitions.IDENTIFIER.DASHBOARD);
            client.socket_reconnect();
        }
    }
}
