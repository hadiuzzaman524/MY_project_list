package my_notepad;

import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.net.URL;
import java.util.ResourceBundle;
import javafx.application.Platform;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.TextArea;
import javafx.stage.FileChooser;
import javafx.stage.Stage;

public class FXMLController implements Initializable {

    @FXML
    private TextArea text;

    public void initialize(URL url, ResourceBundle rb) {

    }

    @FXML
    private void Closebutton(ActionEvent event) {

        Platform.exit();
        System.exit(0);

    }

    @FXML
    private void Savebutton(ActionEvent event) throws FileNotFoundException {

        FileChooser fileChooser = new FileChooser();

        //Set extension filter for text files
        FileChooser.ExtensionFilter extFilter = new FileChooser.ExtensionFilter("TXT files (*.txt)", "*.txt");
        fileChooser.getExtensionFilters().add(extFilter);

        //Show save file dialog
        Stage primaryStage = new Stage();
        java.io.File file = fileChooser.showSaveDialog(primaryStage);

        if (file != null) {
            saveTextToFile(text.getText(), file);
        }

    }

    @FXML
    private void SaveAsbutton(ActionEvent event) throws FileNotFoundException {

        FileChooser fileChooser = new FileChooser();

        FileChooser.ExtensionFilter extFilter = new FileChooser.ExtensionFilter("TXT files (*.txt)", "*.txt");
        fileChooser.getExtensionFilters().add(extFilter);

        Stage primaryStage = new Stage();
        java.io.File file = fileChooser.showSaveDialog(primaryStage);

        if (file != null) {
            saveTextToFile(text.getText(), file);
        }

    }

    @FXML
    private void Deletebutton(ActionEvent event) {

        text.clear();

    }

    @FXML
    private void Cutbutton(ActionEvent event) {

        text.cut();
    }

    @FXML
    private void Coppybutton(ActionEvent event) {
        text.copy();
    }

    @FXML
    private void Pestbutton(ActionEvent event) {

        text.paste();
    }

    private void saveTextToFile(String textt, java.io.File file) throws FileNotFoundException {

        PrintWriter writer;
        writer = new PrintWriter(file);
        writer.println(textt);
        writer.close();
    }

    @FXML
    private void Openbutton(ActionEvent event) {
           FileChooser fileChooser = new FileChooser();

        //Set extension filter for text files
        FileChooser.ExtensionFilter extFilter = new FileChooser.ExtensionFilter("TXT files (*.txt)", "*.txt");
        fileChooser.getExtensionFilters().add(extFilter);

        //Show save file dialog
        Stage primaryStage = new Stage();
        java.io.File file = fileChooser.showOpenDialog(primaryStage);
    }

    @FXML
    private void New(ActionEvent event) {

        text.setText("");
    }

}
