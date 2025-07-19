

import java.io.IOException;
import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class servletlogin1
 */
@WebServlet("/signup")
public class Signup extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public Signup() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#service(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void service(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		PrintWriter out=response.getWriter();
		String n=request.getParameter("username");
		String p=request.getParameter("password");
		String cp=request.getParameter("conformpassword");
		if(p.equals(cp))
		{
		try
		{
			Class.forName("com.mysql.cj.jdbc.Driver");
			Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/vd","root","Vijaydhembare855");
		PreparedStatement ps=con.prepareStatement("insert into login1 values(?,?,?)");
		ps.setString(1, n);
		ps.setString(2, p);
		ps.setString(3, cp);
	    int count=ps.executeUpdate();
	    if(count>0)
	    {
	    	request.getRequestDispatcher("login.jsp").forward(request, response);
	    }
	    else
	    {
	    	request.getRequestDispatcher("login1.jsp").include(request, response);
	    	out.print("values not full full!!");
	    }
		}catch (Exception e) {
			System.out.println(e);
		}
		}
		else
		{
			request.getRequestDispatcher("login1.jsp").include(request, response);
			out.print("password doesnt match");
		}
	}

}
