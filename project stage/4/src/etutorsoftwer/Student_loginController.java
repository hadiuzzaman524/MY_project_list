/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package etutorsoftwer;

import java.io.IOException;
import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.fxml.Initializable;
import javafx.scene.Node;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.layout.AnchorPane;
import javafx.stage.Stage;

/**
 * FXML Controller class
 *
 * @author ASUS
 */
public class Student_loginController implements Initializable {
    //for cancle signup windows
public static Stage stage;
public static Stage forget_stage;

        
    @FXML
    private AnchorPane studentlogin;
    @FXML
    private Label wronngpasslabel;
    @FXML
    private TextField username;
    @FXML
    private TextField password;


    /**
     * Initializes the controller class.
     */
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        // TODO
    }

    @FXML
    private void createaccount(ActionEvent event) throws IOException {

        Parent root = FXMLLoader.load(getClass().getResource("Signup_page.fxml"));


        Scene scene = new Scene(root);
        Stage stage = new Stage();
        stage.setScene(scene);
        stage.show();
       this.stage=stage;//for signup windows

    }

    @FXML
    private void back(ActionEvent event) throws IOException {
      
        Parent root = FXMLLoader.load(getClass().getResource("FXMLDocument.fxml"));
        
        Scene scene = new Scene(root);
        Stage stage2=(Stage)((Node)event.getSource()).getScene().getWindow();
        stage2.setScene(scene);
        stage2.show();
  
    }

    @FXML
    private void forgetpasswordbutton(ActionEvent event) throws IOException {
        Parent root = FXMLLoader.load(getClass().getResource("ForgetPassword.fxml"));


        Scene scene = new Scene(root);
        Stage forget_stage = new Stage();
        forget_stage.setScene(scene);
        forget_stage.show();
       this.forget_stage=forget_stage;
        
    }

    @FXML
    private void submitbutton(ActionEvent event) throws IOException {
        
        String name=username.getText();
        String pass=password.getText();
        if(name.equals("")&&pass.equals(""))
        {
           wronngpasslabel.setText("Empty! please enter name and password");
        }
        else if(name.equals("hadiuzzaman")&&pass.equals("1234"))
        {
        Parent root = FXMLLoader.load(getClass().getResource("Student_dashboard.fxml"));
        
        Scene scene = new Scene(root);
        Stage stage2=(Stage)((Node)event.getSource()).getScene().getWindow();
        stage2.setScene(scene);
        stage2.show(); 
        
        }
        else
        {
            wronngpasslabel.setText("Wrong password Please enter again");
        }
        
    }

}
