

import java.io.IOException;
import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.mysql.cj.jdbc.Driver;


@WebServlet("/contactservlet")
public class contactservlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
 
    public contactservlet() {
        super();
       
    }

	
	protected void service(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		
		PrintWriter out=response.getWriter();
		String nm=request.getParameter("name");
		String em=request.getParameter("email");
		String ms=request.getParameter("message");
		
		try {
			DriverManager.registerDriver(new Driver());
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		Connection conn;
		try {
			conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/ticket","root","Vijaydhembare855");
			PreparedStatement pt=conn.prepareStatement("insert into contact (name,email,message) values(?,?,?)");
			pt.setString(1, nm);
			pt.setString(2, em);
			pt.setString(3, ms);
			int d=pt.executeUpdate();
			 if(d>0)
			 {
				out.print("data inserted success");
			 }
				conn.close();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			out.print(e);
		}
		
	}

}
