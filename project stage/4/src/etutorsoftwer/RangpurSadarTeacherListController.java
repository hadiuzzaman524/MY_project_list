/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package etutorsoftwer;

import java.net.URL;
import java.util.ResourceBundle;
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.ListView;

/**
 * FXML Controller class
 *
 * @author ASUS
 */
public class RangpurSadarTeacherListController implements Initializable {

    ObservableList list = FXCollections.observableArrayList();
    @FXML
    private ListView<String> Tablelist;

    /**
     * Initializes the controller class.
     */
    @Override
    public void initialize(URL url, ResourceBundle rb) {

        // TODO
        list.add("Name: Hadiuzzaman");
        list.add("District: Rangpur");
        list.add("Mobile: 01785304677");
        list.add("Salary: 5000");
        list.add("Interested subject: Math");
        list.add("");
        
        list.add("Name: Shahriar konok ");
        list.add("District: Rangpur");
        list.add("Mobile: 01784593894");
        list.add("Salary: 200");
        list.add("Interested subject: Drowing");
        list.add("");
        
        list.add("Name: Hadiuzzaman");
        list.add("District: Rangpur");
        list.add("Mobile: 01785304677");
        list.add("Salary: 5000");
        list.add("Interested subject: Math");
        list.add("");
        
        list.add("Name: Hadiuzzaman");
        list.add("District: Rangpur");
        list.add("Mobile: 01785304677");
        list.add("Salary: 5000");
        list.add("Interested subject: Math");
        list.add("");
        
        list.add("Name: Hadiuzzaman");
        list.add("District: Rangpur");
        list.add("Mobile: 01785304677");
        list.add("Salary: 5000");
        list.add("Interested subject: Math");
        list.add("");

        Tablelist.setItems(list);
    }

    @FXML
    private void BackButton(ActionEvent event) {
        FindTeacher_Rangpur_DistrictController.stage.close();
    }

}
