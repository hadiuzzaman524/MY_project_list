/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package etutor;

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
import javafx.stage.Stage;

/**
 * FXML Controller class
 *
 * @author ASUS
 */
public class Ponchogor_districtController implements Initializable {

    /**
     * Initializes the controller class.
     */
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        // TODO
    }

    @FXML
    private void AtwariButton(ActionEvent event) {
    }

    @FXML
    private void TetuliaButton(ActionEvent event) {
    }

    @FXML
    private void Backbutton(ActionEvent event) throws IOException {
        Parent root = FXMLLoader.load(getClass().getResource("FindTeacher_Rangpur_Division.fxml"));

        Scene scene = new Scene(root);
        Stage stage2 = (Stage) ((Node) event.getSource()).getScene().getWindow();
        stage2.setScene(scene);
        stage2.show();

    }

    @FXML
    private void DebiganjButton(ActionEvent event) {
    }

    @FXML
    private void BodaButton(ActionEvent event) {
    }

}
