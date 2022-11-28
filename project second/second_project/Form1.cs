using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace second_project
{
  public partial class Form1 : Form
    {
        SqlConnection con = new SqlConnection(@"Data Source=.\SQLEXPRESS; Initial Catalog =student; user id=sa;password=kist@123;");
       
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {

            try
            {
                con.Open();
                string query = "Insert into studetail values('nire','kathmandu','99999')";
                SqlCommand cmd = new SqlCommand(query,con);
                cmd.ExecuteNonQuery();
                MessageBox.Show("saved successfully");
                con.Close();
            }
            catch (Exception ex)
            {
                MessageBox.Show("Error:" + ex.InnerException);

            }
        }
    }
    
}

