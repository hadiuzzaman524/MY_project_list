/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package simple_calculator;

import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;

import javafx.fxml.Initializable;
import javafx.scene.control.Button;
import javafx.scene.control.TextField;

/**
 *
 * @author ASUS
 */
public class FXMLDocumentController implements Initializable {
   boolean flag=true;
    @FXML
    private TextField Display;
    

    @Override
    public void initialize(URL url, ResourceBundle rb) {
        // TODO
    }    

    @FXML
    private void Numberaction(ActionEvent event) {
        if(flag==true)
         {
             Display.setText("");
             flag=false;
         }
       
          String old=Display.getText();
        
         String newt=((Button)event.getSource()).getText();
         String number= old+newt;
         
        Display.setText(number);
        
        
    }
    String operator=""; 
    double number1=0;
     double number2=0;

    @FXML
      private void Operatoraction(ActionEvent event) {
        
          number1=Double.parseDouble(Display.getText());
          
        operator=((Button)event.getSource()).getText();
     
        Display.setText("");
        
    }

    @FXML
    private void Dotaction(ActionEvent event) {
        String old=Display.getText();
        if(old.contains("."))return;
        Display.setText(old+".");
    }

   
    @FXML
    private void Resultaction(ActionEvent event) {
        number2=Double.parseDouble(Display.getText());
        
        switch(operator)
        {
            case "+":
               number1+=number2;
             break;
             
             case "-":
               number1-=number2;
             break;
             
             case "x":
               number1*=number2;
             break;
             
             case "/":
               number1/=number2;
             break;
              case "%":
               number1%=number2;
             break;
              
        }
      
          Display.setText(""+number1);
          flag=true;
         
    }

    @FXML
    private void Allclear(ActionEvent event) {
        
        Display.setText("");
    }

    @FXML
    private void clear(ActionEvent event) {
        
        String old=Display.getText();
        if(!old.equals(""))
        {
            String sub=old.substring(0,old.length()-1);
            Display.setText(sub);
            
        }
    }

    @FXML
    private void offaction(ActionEvent event) {
        
        System.exit(1);
    }
    
}
