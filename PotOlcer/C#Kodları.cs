using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO.Ports;

namespace WindowsFormsApplication3
{
    public partial class Form1 : Form
    {
        SerialPort serialport;
        public Form1()
        {
            InitializeComponent();
            serialport = new SerialPort();
            serialport.BaudRate = 9600;
        }
        private void Form1_Load(object sender, EventArgs e) { }


    
    
        //Bağlan Butonu
        private void button1_Click(object sender, EventArgs e)
        {
            timer1.Start();
            try
            {
                serialport.PortName = comboBox1.Text;
                if (!serialport.IsOpen)
                    serialport.Open();
            }
            catch
            {
                MessageBox.Show("Seri Port Hatası!");
            }
        } 
        //Timer1 Tick
        private void timer1_Tick(object sender, EventArgs e)
        {
            try
            {
                serialport.Write("a");
                int receiveddata = Convert.ToInt16(serialport.ReadExisting());
                textBox2.Text = receiveddata.ToString();
                progressBar1.Value = Convert.ToInt16(textBox2.Text);
                System.Threading.Thread.Sleep(100);
                if (receiveddata < 100)
                {
                    textBox3.Text = "0";
                    label4.Text = "LED Min";
                    label4.ForeColor = Color.Black;

                }
                else if (receiveddata > 100 & receiveddata < 200)
                {
                    textBox3.Text = "1";
                    label4.Text = "";

                }
                else if (receiveddata > 200 & receiveddata < 300)
                {
                    textBox3.Text = "2";
                    label4.Text = "";

                }
                else if (receiveddata > 300 & receiveddata < 400)
                {
                    textBox3.Text = "3";
                    label4.Text = "";

                }
                else if (receiveddata > 400 & receiveddata < 500)
                {
                    textBox3.Text = "4";
                    label4.Text = "";

                }
                else if (receiveddata > 500 & receiveddata < 600)
                {
                    textBox3.Text = "5";
                    label4.Text = "";

                }
                else if (receiveddata > 600 & receiveddata < 700)
                {
                    textBox3.Text = "6";
                    label4.Text = "";

                }
                else if (receiveddata > 700 & receiveddata < 800)
                {
                    textBox3.Text = "7";
                    label4.Text = "";

                }
                else if (receiveddata > 800 & receiveddata < 900)
                {
                    textBox3.Text = "8";
                    label4.Text = "";

                }
                else if (receiveddata > 900 & receiveddata < 1023)
                {
                    textBox3.Text = "9";
                    label4.ForeColor = Color.Red;
                    label4.Text = "LED Max";


                }
            }
            catch (Exception ex){}
        }
        //Durdur Butonu
        private void button2_Click(object sender, EventArgs e)
        {
            timer1.Stop();
            serialport.Close();
            
        }

        private void label5_Click(object sender, EventArgs e)
        {

        }

        private void progressBar1_Click(object sender, EventArgs e)
        {

        }              
    }
}
