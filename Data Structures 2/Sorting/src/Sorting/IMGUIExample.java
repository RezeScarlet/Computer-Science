/*
 * Copyright (C) 2025 Prof. Dr. David Buzatto
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
package Sorting;

import br.com.davidbuzatto.jsge.collision.CollisionUtils;
import br.com.davidbuzatto.jsge.core.engine.EngineFrame;
import br.com.davidbuzatto.jsge.image.Image;
import br.com.davidbuzatto.jsge.imgui.GuiButton;
import br.com.davidbuzatto.jsge.imgui.GuiButtonGroup;
import br.com.davidbuzatto.jsge.imgui.GuiCheckBox;
import br.com.davidbuzatto.jsge.imgui.GuiColorPicker;
import br.com.davidbuzatto.jsge.imgui.GuiComponent;
import br.com.davidbuzatto.jsge.imgui.GuiConfirmDialog;
import br.com.davidbuzatto.jsge.imgui.GuiDropdownList;
import br.com.davidbuzatto.jsge.imgui.GuiGlue;
import br.com.davidbuzatto.jsge.imgui.GuiGroup;
import br.com.davidbuzatto.jsge.imgui.GuiInputDialog;
import br.com.davidbuzatto.jsge.imgui.GuiLabel;
import br.com.davidbuzatto.jsge.imgui.GuiLabelButton;
import br.com.davidbuzatto.jsge.imgui.GuiLine;
import br.com.davidbuzatto.jsge.imgui.GuiList;
import br.com.davidbuzatto.jsge.imgui.GuiMessageDialog;
import br.com.davidbuzatto.jsge.imgui.GuiPanel;
import br.com.davidbuzatto.jsge.imgui.GuiProgressBar;
import br.com.davidbuzatto.jsge.imgui.GuiRadioButton;
import br.com.davidbuzatto.jsge.imgui.GuiSlider;
import br.com.davidbuzatto.jsge.imgui.GuiSpinner;
import br.com.davidbuzatto.jsge.imgui.GuiTextField;
import br.com.davidbuzatto.jsge.imgui.GuiTheme;
import br.com.davidbuzatto.jsge.imgui.GuiToggleButton;
import br.com.davidbuzatto.jsge.imgui.GuiToolTip;
import br.com.davidbuzatto.jsge.imgui.GuiWindow;
import br.com.davidbuzatto.jsge.math.Vector2;
import java.awt.Color;
import java.util.ArrayList;
import java.util.List;

/**
 * Exemplo de uso dos componentes IMGUI (Immediate Mode Graphical User Interface).
 * 
 * @author Prof. Dr. David Buzatto
 */
public class IMGUIExample extends EngineFrame {

    private List<GuiComponent> components;
    private List<GuiComponent> interactionComponents;
    
    private GuiLabel label1;
    private GuiLabel label2;
    private GuiLabel label3;
    private GuiButton button;
    private GuiLabelButton labelButton;
    private GuiCheckBox checkBox;
    private GuiRadioButton radioButton1;
    private GuiRadioButton radioButton2;
    private GuiRadioButton radioButton3;
    private GuiButtonGroup buttonGroupRadio;
    private GuiToggleButton toggleButton;
    private GuiToggleButton toggleButton1;
    private GuiToggleButton toggleButton2;
    private GuiToggleButton toggleButton3;
    private GuiButtonGroup buttonGroupToggle;
    private GuiProgressBar progressBar;
    private GuiSpinner spinner;
    private GuiSlider horizontalSlider;
    private GuiSlider verticalSlider;
    private GuiTextField textField;
    private GuiDropdownList dropdownList;
    private GuiList list;
    private GuiColorPicker colorPicker;
    
    private GuiLine horizontalLine;
    private GuiLine horizontalLineUntitled;
    private GuiLine verticalLine;
    private GuiLine verticalLineUntitled;
    private GuiGroup group;
    private GuiGroup groupUntitled;
    private GuiPanel panel;
    private GuiPanel panelUntitled;
    private GuiWindow window;
    private GuiWindow windowUntitled;
    
    private GuiButton buttonShowMessageDialog;
    private GuiButton buttonShowInputDialog;
    private GuiButton buttonShowConfirmDialog;
    
    private GuiMessageDialog messageDialog;
    private GuiInputDialog inputDialog;
    private GuiConfirmDialog confirmDialog;
    
    private GuiWindow themeWindow;
    private GuiButton themeButton;
    private GuiColorPicker themeColorPicker;
    private GuiGlue glue;
    
    private GuiToolTip toolTipLabel1;
    private GuiToolTip toolTipLabel2;
    private GuiToolTip toolTipLabel3;
    
    private GuiComponent draggedComponent;
    private Vector2 previousMousePos;
    
    private GuiCheckBox checkEnabled;
    private GuiCheckBox checkVisible;
    private GuiCheckBox checkDrawBounds;
    
    private int buttonPressCount;
    private int labelButtonPressCount;
    
    private double progressCount;
    private double progressTime;
    
    private String messageDialogStatus;
    private String inputDialogStatus;
    private String confirmDialogStatus;
    
    private GuiTheme lightTheme;
    private GuiTheme darkTheme;
    private GuiTheme currentTheme;
    private GuiTheme coloredTheme;
    private ChangeThemeButton changeThemeButton;
    
    private Image sunIcon;
    private Image moonIcon;
    
    /**
     * Cria o exemplo.
     */
    public IMGUIExample() {
        super( 1070, 840, "IMGUI", 60, true );
    }
    
    @Override
    public void create() {
        
        useAsDependencyForIMGUI();
        components = new ArrayList<>();
        interactionComponents = new ArrayList<>();
        
        lightTheme = GuiTheme.buildLightTheme();
        darkTheme = GuiTheme.buildDarkTheme();
        coloredTheme = GuiTheme.buildColoredTheme( EngineFrame.BLUE );
        
        currentTheme = lightTheme;
        currentTheme.install();
        
        int x = 20;
        int y = 40;
        int vSpacing = 50;
        
        label1 = new GuiLabel( x, y, 130, 30, "TL Label" );
        label1.setVerticalAlignment( GuiLabel.TOP_ALIGNMENT );
        
        label2 = new GuiLabel( x + 150, y, 130, 30, "MC Label" );
        label2.setHorizontalAlignment( GuiLabel.CENTER_ALIGNMENT );
        
        label3 = new GuiLabel( x + 300, y, 130, 30, "BR Label" );
        label3.setHorizontalAlignment( GuiLabel.RIGHT_ALIGNMENT );
        label3.setVerticalAlignment( GuiLabel.BOTTOM_ALIGNMENT );
        
        button = new GuiButton( x, y += vSpacing, 100, 30, "Button" );
        labelButton = new GuiLabelButton( x, y += vSpacing, 90, 30, "Label Button" );
        checkBox = new GuiCheckBox( x, y += vSpacing, 100, 30, "Check Box" );
        
        buttonGroupRadio = new GuiButtonGroup();
        radioButton1 = new GuiRadioButton( x, y += vSpacing, 80, 30, "Radio 1" );
        radioButton1.setSelected( true );
        radioButton1.setButtonGroup( buttonGroupRadio );
        radioButton2 = new GuiRadioButton( x + 90, y, 80, 30, "Radio 2" );
        radioButton2.setButtonGroup( buttonGroupRadio );
        radioButton3 = new GuiRadioButton( x + 180, y, 80, 30, "Radio 3" );
        radioButton3.setButtonGroup( buttonGroupRadio );
        
        toggleButton = new GuiToggleButton( x, y += vSpacing, 120, 30, "Toggle Button" );
        buttonGroupToggle = new GuiButtonGroup();
        toggleButton1 = new GuiToggleButton( x, y += vSpacing, 80, 30, "Option 1" );
        toggleButton1.setSelected( true );
        toggleButton1.setButtonGroup( buttonGroupToggle );
        toggleButton2 = new GuiToggleButton( x + 80, y, 80, 30, "Option 2" );
        toggleButton2.setButtonGroup( buttonGroupToggle );
        toggleButton3 = new GuiToggleButton( x + 160, y, 80, 30, "Option 3" );
        toggleButton3.setButtonGroup( buttonGroupToggle );
        
        progressBar = new GuiProgressBar( x, y += vSpacing + 5, 260, 20, 0, 0, 50 );
        spinner = new GuiSpinner( x, y += vSpacing - 5, 100, 30, 0, 0, 10 );
        horizontalSlider = new GuiSlider( x, ( y += vSpacing ) + 25, 220, 30, 25, 1, 50 );
        verticalSlider = new GuiSlider( x + 230, y, 30, 80, 25, 1, 50, GuiSlider.VERTICAL );
        textField = new GuiTextField( x, y += vSpacing * 2, 260, 30, "" );
        
        dropdownList = new GuiDropdownList( x, y += vSpacing, 240, 30, 
                List.<String>of( 
                        "pizza", "carbonara", "parmigiana", "lasagna", "risotto", "arancino"
                )
        );
        list = new GuiList( x, y += vSpacing, 240, 130, 
                List.<String>of( 
                        "gelato","cannoli","tiramisu","cassata","cantuccini","babà al rum" 
                )
        );

        progressTime = 0.05;
        
        components.add( label1 );
        components.add( label2 );
        components.add( label3 );
        components.add( button );
        components.add( labelButton );
        components.add( checkBox );
        components.add( radioButton1 );
        components.add( radioButton2 );
        components.add( radioButton3 );
        components.add( toggleButton );
        components.add( toggleButton1 );
        components.add( toggleButton2 );
        components.add( toggleButton3 );
        components.add( progressBar );
        components.add( spinner );
        components.add( horizontalSlider );
        components.add( verticalSlider );
        components.add( textField );
        components.add( list );
        components.add( dropdownList );
        
        x = 480;
        y = 55;
        vSpacing = 120;
        
        horizontalLine = new GuiLine( x, y + 10, 110, 30, "Line" );
        horizontalLineUntitled = new GuiLine( x + 170, y +10, 110, 30, "" );
        verticalLine = new GuiLine( x + 120, y - 20, 30, 90, "Line", GuiLine.VERTICAL );
        verticalLineUntitled = new GuiLine( x + 290, y - 20, 30, 90, "", GuiLine.VERTICAL );
        group = new GuiGroup( x, y += vSpacing - 30, 150, 70, "Group" );
        groupUntitled = new GuiGroup( x + 170, y, 150, 70, "" );
        panel = new GuiPanel( x, y += vSpacing - 25, 150, 80, "Panel" );
        panelUntitled = new GuiPanel( x + 170, y, 150, 80, "" );
        window = new GuiWindow( x, y += vSpacing - 20, 150, 80, "Window" );
        windowUntitled = new GuiWindow( x + 170, y, 150, 80, "" );
        
        components.add( horizontalLine );
        components.add( horizontalLineUntitled );
        components.add( verticalLine );
        components.add( verticalLineUntitled );
        components.add( group );
        components.add( groupUntitled );
        components.add( panel );
        components.add( panelUntitled );
        components.add( window );
        components.add( windowUntitled );
        
        x = 480;
        y = 490;
        vSpacing = 50;
        buttonShowMessageDialog = new GuiButton( x, y, 150, 30, "Show Message Dialog" );
        buttonShowInputDialog = new GuiButton( x, y += vSpacing, 150, 30, "Show Input Dialog" );
        buttonShowConfirmDialog = new GuiButton( x, y += vSpacing, 150, 30, "Show Confirm Dialog" );
        messageDialog = new GuiMessageDialog( "Message Dialog", "This is a message!", true );
        inputDialog = new GuiInputDialog( "Input Dialog", "Provide some data:", true );
        confirmDialog = new GuiConfirmDialog( "Confirm Dialog", "Hello!\nHow are you?", "fine", "happy", "hungry", true );
        
        messageDialogStatus = "";
        inputDialogStatus = "";
        confirmDialogStatus = "";
        
        x = 495;
        y = 695;
        colorPicker = new GuiColorPicker( x, y, 100, 100, EngineFrame.LIME );
        components.add( colorPicker );
        
        x = 820;
        y = 30;
        themeWindow = new GuiWindow( x, y, 240, 140, "Theme Color (drag me!)" );
        themeButton = new GuiButton( 0, 0, 100, 85, "Apply Color" );
        themeColorPicker = new GuiColorPicker( 0, 0, 85, 85, EngineFrame.BLUE );
        themeColorPicker.setAllowingAlphaChange( false );
        
        glue = new GuiGlue( themeWindow );
        glue.addChild( themeColorPicker, 10, 40 );
        glue.addChild( themeButton, 130, 40 );
        components.add( glue );
        
        vSpacing = 30;
        y += themeWindow.getHeight() + 10;
        checkEnabled = new GuiCheckBox( x, y, 100, 20, "Enabled" );
        checkEnabled.setSelected( true );
        checkVisible = new GuiCheckBox( x, y += vSpacing, 100, 20, "Visible" );
        checkVisible.setSelected( true );
        checkDrawBounds = new GuiCheckBox( x, y += vSpacing, 100, 20, "Draw bounds" );
        
        changeThemeButton = new ChangeThemeButton( 
                getScreenWidth() - 60, getScreenHeight() - 60, 50, 50,
                loadImage( "resources/images/sun.png" ),
                loadImage( "resources/images/moon.png" )
        );
                
        toolTipLabel1 = new GuiToolTip( label1, "Top and Left Label" );
        toolTipLabel2 = new GuiToolTip( label2, "Middle and Center Label" );
        toolTipLabel3 = new GuiToolTip( label3, "Bottom and Right Label" );
        components.add( toolTipLabel1 );
        components.add( toolTipLabel2 );
        components.add( toolTipLabel3 );
        
        interactionComponents.add( buttonShowMessageDialog );
        interactionComponents.add( buttonShowInputDialog );
        interactionComponents.add( buttonShowConfirmDialog );
        interactionComponents.add( messageDialog );
        interactionComponents.add( inputDialog );
        interactionComponents.add( confirmDialog );
        interactionComponents.add( checkEnabled );
        interactionComponents.add( checkVisible );
        interactionComponents.add( checkDrawBounds );
        interactionComponents.add( changeThemeButton );
        
    }

    @Override
    public void update( double delta ) {
        
        Vector2 mousePos = getMousePositionPoint();
        
        for ( GuiComponent c : components ) {
            if ( dropdownList.isDropdownListVisible()  ) {
                if ( !c.equals( list ) ) {
                    c.update( delta );
                }
            } else {
                c.update( delta );
            }
        }
        
        if ( button.isMousePressed() ) {
            buttonPressCount++;
        }
        
        if ( labelButton.isMousePressed() ) {
            labelButtonPressCount++;
        }
        
        progressCount += delta;
        if ( progressCount > progressTime ) {
            if ( progressBar.isEnabled() ) {
                progressBar.setValue( progressBar.getValue() + 0.1 );
            }
            progressCount = 0;
        }
        
        if ( panel.isTitleBarPressed() ) {
            draggedComponent = panel;
        }
        
        if ( panelUntitled.isTitleBarPressed() ) {
            draggedComponent = panelUntitled;
        }
        
        if ( window.isCloseButtonPressed() ) {
            window.setVisible( false );
        }
        
        if ( window.isTitleBarPressed() ) {
            draggedComponent = window;
        }
        
        if ( windowUntitled.isCloseButtonPressed() ) {
            windowUntitled.setVisible( false );
        }
        
        if ( windowUntitled.isTitleBarPressed() ) {
            draggedComponent = windowUntitled;
        }
        
        if ( themeWindow.isCloseButtonPressed() ) {
            glue.setVisible( false );
        }
        
        if ( themeWindow.isTitleBarPressed() ) {
            draggedComponent = glue;
        }
        
        if ( isMouseButtonDown( MOUSE_BUTTON_LEFT ) ) {
            if ( draggedComponent != null ) {
                draggedComponent.move( mousePos.x - previousMousePos.x, mousePos.y - previousMousePos.y );
            }
        } else if ( isMouseButtonUp( MOUSE_BUTTON_LEFT ) ) {
            draggedComponent = null;
        }
        
        buttonShowMessageDialog.update( delta );
        buttonShowInputDialog.update( delta );
        buttonShowConfirmDialog.update( delta );
        messageDialog.update( delta );
        inputDialog.update( delta );
        confirmDialog.update( delta );
        
        if ( buttonShowMessageDialog.isMousePressed() ) {
            messageDialog.show();
        }
        
        if ( buttonShowInputDialog.isMousePressed() ) {
            inputDialog.show();
        }
        
        if ( buttonShowConfirmDialog.isMousePressed() ) {
            confirmDialog.show();
        }
        
        if ( messageDialog.isCloseButtonPressed() ) {
            messageDialogStatus = "closed";
            messageDialog.hide();
        }
        
        if ( messageDialog.isOkButtonPressed() ) {
            messageDialogStatus = "ok";
            messageDialog.hide();
        }
        
        if ( messageDialog.isTitleBarPressed() ) {
            draggedComponent = messageDialog;
        }
        
        if ( inputDialog.isCloseButtonPressed() ) {
            inputDialogStatus = "closed";
            inputDialog.hide();
        }
        
        if ( inputDialog.isOkButtonPressed() ) {
            inputDialogStatus = inputDialog.getValue();
            inputDialog.hide();
        }
        
        if ( inputDialog.isEnterKeyPressed() ) {
            inputDialogStatus = inputDialog.getValue();
            inputDialog.hide();
        }
        
        if ( inputDialog.isCancelButtonPressed() ) {
            inputDialogStatus = "canceled";
            inputDialog.hide();
        }
        
        if ( inputDialog.isTitleBarPressed() ) {
            draggedComponent = inputDialog;
        }
        
        if ( confirmDialog.isCloseButtonPressed() ) {
            confirmDialogStatus = "closed";
            confirmDialog.hide();
        }
        
        String pressedButton = confirmDialog.getPressedButton();
        if ( pressedButton != null ) {
            confirmDialogStatus = String.format(  "\"%s\" pressed", pressedButton );
            confirmDialog.hide();
        }
        
        if ( confirmDialog.isTitleBarPressed() ) {
            draggedComponent = confirmDialog;
        }
        
        if ( themeButton.isMousePressed() ) {
            coloredTheme = GuiTheme.buildColoredTheme( themeColorPicker.getColor() );
            currentTheme = coloredTheme;
            currentTheme.apply( components );
            currentTheme.apply( interactionComponents );
            currentTheme.install();
            changeThemeButton.activeTheme = ChangeThemeButton.COLORED_THEME;
        }
        
        checkEnabled.update( delta );
        checkVisible.update( delta );
        checkDrawBounds.update( delta );
        changeThemeButton.update( delta );
        
        if ( checkEnabled.isMousePressed() ) {
            for ( GuiComponent c : components ) {
                if ( !( c instanceof GuiToolTip ) ) {
                    c.setEnabled( checkEnabled.isSelected() );
                }
            }
        }
        
        if ( checkVisible.isMousePressed() ) {
            for ( GuiComponent c : components ) {
                if ( !( c instanceof GuiToolTip ) ) {
                    c.setVisible( checkVisible.isSelected() );
                }
            }
        }
        
        if ( checkDrawBounds.isMousePressed() ) {
            for ( GuiComponent c : components ) {
                c.setDrawingBounds( checkDrawBounds.isSelected() );
                checkEnabled.setDrawingBounds( checkDrawBounds.isSelected() );
                checkVisible.setDrawingBounds( checkDrawBounds.isSelected() );
                checkDrawBounds.setDrawingBounds( checkDrawBounds.isSelected() );
            }
        }
        
        if ( changeThemeButton.isMousePressed() ) {
            changeThemeButton.activeTheme = (changeThemeButton.activeTheme++) % 3 + 1;
            switch ( changeThemeButton.activeTheme ) {
                case ChangeThemeButton.LIGHT_THEME:
                    currentTheme = lightTheme;
                    break;
                case ChangeThemeButton.DARK_THEME:
                    currentTheme = darkTheme;
                    break;
                case ChangeThemeButton.COLORED_THEME:
                    currentTheme = coloredTheme;
                    break;
                    
            }
            currentTheme.apply( components );
            currentTheme.apply( interactionComponents );
            currentTheme.install();
        }
        
        if ( isMouseButtonPressed( MOUSE_BUTTON_RIGHT ) ) {
            for ( GuiComponent c : components ) {
                if ( CollisionUtils.checkCollisionPointRectangle( mousePos, c.getBounds() ) ) {
                    c.setEnabled( !c.isEnabled() );
                }
            }
        }
        
        previousMousePos = mousePos;
        
        /*int x = 0;
        int y = 0;
        if ( isKeyPressed( KEY_RIGHT ) ) {
            x = 10;
        } else if ( isKeyPressed( KEY_LEFT ) ) {
            x = -10;
        } else if ( isKeyPressed( KEY_UP ) ) {
            y = -10;
        } else if ( isKeyPressed( KEY_DOWN ) ) {
            y = 10;
        }
        
        if ( x != 0 || y != 0 ) {
            for ( GuiComponent c : components ) {
                c.move( x, y );
            }
        }*/
        
    }
    
    @Override
    public void draw() {
        
        clearBackground( currentTheme.containerBackgroundColor );
        
        int hSep = 280;
        int dataMargin = hSep + 25;
        drawGrid( 1, 10, 30, 450, 50, 0, currentTheme.disabledBorderColor );
        drawGrid( 8, 10, 80, 450, 50, hSep, currentTheme.disabledBorderColor );
        drawGrid( 1, 10, 480, 450, 100, hSep, currentTheme.disabledBorderColor );
        drawGrid( 2, 10, 580, 450, 50, hSep, currentTheme.disabledBorderColor );
        drawGrid( 1, 10, 680, 450, 150, hSep, currentTheme.disabledBorderColor );
        drawGrid( 4, 470, 30, 340, 100, 170, currentTheme.disabledBorderColor );
        drawGrid( 3, 470, 480, 340, 50, 170, currentTheme.disabledBorderColor );
        drawGrid( 1, 470, 680, 340, 150, 170, currentTheme.disabledBorderColor );
        
        drawText( "Controls (right click to disable)", 10, 10, 20, currentTheme.borderColor );
        drawText( "Containers/Separators", 470, 10, 20, currentTheme.borderColor );
        drawText( "Dialogs", 470, 460, 20, currentTheme.borderColor );
        drawText( "Color Picker", 470, 660, 20, currentTheme.borderColor );
        
        drawText( "press count: " + buttonPressCount, dataMargin, button.getBounds().y + button.getBounds().height / 2 - 3, 12, currentTheme.borderColor );
        drawText( "press count: " + labelButtonPressCount, dataMargin, labelButton.getBounds().y + labelButton.getBounds().height / 2 - 3, 12, currentTheme.borderColor );
        drawText( checkBox.isSelected() ? "selected" : "unselected", dataMargin, checkBox.getBounds().y + checkBox.getBounds().height / 2 - 3, 12, currentTheme.borderColor );
        
        int selectedRadio = 0;
        if ( radioButton1.isSelected() ) {
            selectedRadio = 1;
        } else if ( radioButton2.isSelected() ) {
            selectedRadio = 2;
        } else if ( radioButton3.isSelected() ) {
            selectedRadio = 3;
        }
        drawText( "radio " + selectedRadio, dataMargin, radioButton1.getBounds().y + radioButton1.getBounds().height / 2 - 3, 12, currentTheme.borderColor );
        
        drawText( toggleButton.isSelected() ? "selected" : "unselected", dataMargin, toggleButton.getBounds().y + toggleButton.getBounds().height / 2 - 3, 12, currentTheme.borderColor );
        
        int selectedOtion = 0;
        if ( toggleButton1.isSelected() ) {
            selectedOtion = 1;
        } else if ( toggleButton2.isSelected() ) {
            selectedOtion = 2;
        } else if ( toggleButton3.isSelected() ) {
            selectedOtion = 3;
        }
        drawText( "option " + selectedOtion, dataMargin, toggleButton1.getBounds().y + toggleButton1.getBounds().height / 2 - 3, 12, currentTheme.borderColor );
        
        drawText( String.format( "%.0f%% (%.2f)", progressBar.getPercentage() * 100, progressBar.getValue() ), dataMargin, progressBar.getBounds().y + progressBar.getBounds().height / 2 - 3, 12, currentTheme.borderColor );
        drawText( String.format( "value: %d", spinner.getValue() ), dataMargin, spinner.getBounds().y + spinner.getBounds().height / 2 - 3, 12, currentTheme.borderColor );
        drawText( String.format( "value (h): %.2f", horizontalSlider.getValue() ), dataMargin, horizontalSlider.getBounds().y + horizontalSlider.getBounds().height / 2 - 25, 12, currentTheme.borderColor );
        drawText( String.format( "value (v): %.2f", verticalSlider.getValue() ), dataMargin, verticalSlider.getBounds().y + verticalSlider.getBounds().height / 2 + 20, 12, currentTheme.borderColor );
        drawText( String.format( "size: %d", textField.getValue().length() ), dataMargin, textField.getBounds().y + textField.getBounds().height / 2 - 3, 12, currentTheme.borderColor );
        drawText( String.format( "selected: %s", dropdownList.getSelectedItemText() ), dataMargin, dropdownList.getBounds().y + dropdownList.getBounds().height / 2 - 3, 12, currentTheme.borderColor );
        drawText( String.format( "selected: %s", list.getSelectedItemText() ), dataMargin, list.getBounds().y + list.getBounds().height / 2 - 3, 12, currentTheme.borderColor );
        
        buttonShowMessageDialog.draw();
        buttonShowInputDialog.draw();
        buttonShowConfirmDialog.draw();
        
        drawText( messageDialogStatus, 650, buttonShowMessageDialog.getBounds().y + buttonShowMessageDialog.getBounds().height / 2 - 3, 12, currentTheme.borderColor );
        drawText( inputDialogStatus, 650, buttonShowInputDialog.getBounds().y + buttonShowInputDialog.getBounds().height / 2 - 3, 12, currentTheme.borderColor );
        drawText( confirmDialogStatus, 650, buttonShowConfirmDialog.getBounds().y + buttonShowConfirmDialog.getBounds().height / 2 - 3, 12, currentTheme.borderColor );
        
        drawColoredRectangle( 675, colorPicker.getBounds().y + colorPicker.getBounds().height / 2 - 40, colorPicker.getColor() );
        
        checkEnabled.draw();
        checkVisible.draw();
        checkDrawBounds.draw();
        changeThemeButton.draw();
        
        drawFPS( checkDrawBounds.getX(), checkDrawBounds.getY() + checkDrawBounds.getHeight() + 15 );
        
        for ( GuiComponent c : components ) {
            c.draw();
        }
        
        messageDialog.draw();
        inputDialog.draw();
        confirmDialog.draw();
        
    }
    
    private void drawGrid( int lines, int x, int y, int width, int height, int hSep, Color color ) {
        
        for ( int i = 0; i <= lines; i++ ) {
            drawLine( x, y + height * i, x + width, y + height * i, color );
        }
        
        drawLine( x, y, x, y + height * lines, color );
        drawLine( x + hSep, y, x + hSep, y + height * lines, color );
        drawLine( x + width, y, x + width, y + height * lines, color );
        
    }
    
    private void drawColoredRectangle( double x, double y, Color color ) {
        
        int w = 100;
        int retSize = 5;
        
        for ( int i = 0; i < w; i += retSize ) {
            for ( int j = 0; j < w; j += retSize ) {
                fillRectangle( 
                        x + j,
                        y + i,
                        retSize,
                        retSize,
                        i % 2 == 0 ?
                                j % 2 == 0 ? EngineFrame.WHITE : EngineFrame.GRAY
                                :
                                j % 2 == 0 ? EngineFrame.GRAY : EngineFrame.WHITE
                );
            }
        }
        
        fillRectangle( x, y, 100, 100, colorPicker.getColor() );
        drawRectangle( x, y, 100, 100, GRAY );
        
    }
    
    private class ChangeThemeButton extends GuiComponent {
        
        private static final int LIGHT_THEME = 1;
        private static final int DARK_THEME = 2;
        private static final int COLORED_THEME = 3;
        
        private int activeTheme;
        private Image sunIcon;
        private Image moonIcon;
        
        public ChangeThemeButton( double x, double y, double width, double height, Image sunIcon, Image moonIcon ) {
            super( x, y, width, height );
            this.sunIcon = sunIcon;
            this.moonIcon = moonIcon;
            this.activeTheme = LIGHT_THEME;
        }
        
        public ChangeThemeButton( double x, double y, double width, double height, Image sunIcon, Image moonIcon, EngineFrame engine ) {
            super( x, y, width, height, engine );
            this.sunIcon = sunIcon;
            this.moonIcon = moonIcon;
            this.activeTheme = LIGHT_THEME;
        }
        
        @Override
        public void draw() {
            fillRectangle( bounds, backgroundColor );
            switch ( activeTheme ) {
                case LIGHT_THEME:
                    drawImage( sunIcon, bounds.x, bounds.y );
                    break;
                case DARK_THEME:
                    drawImage( moonIcon, bounds.x, bounds.y );
                    break;
                case COLORED_THEME:
                    drawText( "C", bounds.x + 10, bounds.y + 7, 50, textColor );
                    break;
            }
            drawRectangle( bounds, borderColor );
        }

        @Override
        public void move( double xAmount, double yAmount ) {
        }
        
    }
    
    /**
     * Executa o exemplo.
     * @param args Argumentos.
     */
    public static void main( String[] args ) {
        new IMGUIExample();
    }
    
}
