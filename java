package test;
import java.sql.*;
public class CreateDb {
static final String JDBC_DRIVER = "com.mysql.cj.jdbc.Driver";
static final String DB_URL = "jdbc:mysql://localhost:3306/";
static final String USER = "Amala";
static final String PWD = "123456";

public static void main(String[] args) {
	Connection con = null;
	Statement statement = null;
	try {
		Class.forName(JDBC_DRIVER);
		System.out.println("Connecting to database...");
		con = DriverManager.getConnection(DB_URL, USER,PWD);
		
		System.out.println("Creating database...");
		statement = con.createStatement();
	}catch (SQLException e) {
		e.printStackTrace();
	}
	catch (ClassNotFoundException e) {
	e.printStackTrace();
}
finally {
	try {
		if(statement!=null) {
			statement.close();
		}
		if(con!=null) {
			con.close();
		}
	
	}
    catch (SQLException e) {
	    e.printStackTrace();
    } 
}
}
}
