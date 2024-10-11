/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package esdc4aula02;

import java.awt.BasicStroke;
import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.RenderingHints;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.awt.geom.Ellipse2D;
import java.awt.geom.Path2D;
import java.awt.geom.Point2D;
import java.util.ArrayList;
import java.util.List;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JOptionPane;
import javax.swing.JPanel;

/**
 * Resolução do Exercício d2.1
 * 
 * @author Prof. Dr. David Buzatto
 */
public class Desafiod2p1 {
    
    /**
     * Calcula a envoltória convexa (convex hull) de um conjunto de pontos usando
     * o algoritmo Graham Scan (Exame de Graham).
     * 
     * @param points Pontos a serem analisados.
     * @return A envoltória convexa.
     */
    public static List<Point2D.Double> getConvexHull( List<Point2D.Double> points ) {
        
        // implementação
        
        // cuidado aqui...
        return new ArrayList<Point2D.Double>();
        
    }
    
    private static class CHPanel extends JPanel {
        
        List<Point2D.Double> points = new ArrayList<>();
        List<Point2D.Double> chPoints = new ArrayList<>();
        Color chColorStroke = new Color( 39, 111, 139, 200 );
        Color chColorFill = new Color( 39, 111, 139, 100 );
        BasicStroke st = new BasicStroke( 4, BasicStroke.CAP_ROUND, BasicStroke.JOIN_ROUND );
        
        @Override
        protected void paintComponent( Graphics g ) {
            
            super.paintComponent( g );
            
            Graphics2D g2d = ( Graphics2D ) g.create();
            g2d.setRenderingHint( RenderingHints.KEY_ANTIALIASING, 
                    RenderingHints.VALUE_ANTIALIAS_ON );
            
            g2d.setColor( Color.WHITE );
            g2d.fillRect( 0, 0, getWidth(), getHeight() );
            g2d.setColor( Color.BLACK );
            g2d.drawRect( 0, 0, getWidth()-1, getHeight()-1 );
            
            for ( Point2D.Double p : points ) {
                g2d.fill( new Ellipse2D.Double( p.x - 2, p.y - 2, 4, 4 ) );
            }
            
            if ( !chPoints.isEmpty() ) {
                
                Path2D.Double p2d = new Path2D.Double();
                p2d.moveTo( chPoints.get( 0 ).x, chPoints.get( 0 ).y );

                for ( int i = 1; i < chPoints.size(); i++ ) {
                    Point2D.Double p = chPoints.get( i );
                    if ( p != null ) {
                        p2d.lineTo( p.x, p.y );
                    }
                }

                p2d.closePath();

                g2d.setColor( chColorFill );
                g2d.fill( p2d );
                g2d.setStroke( st );
                g2d.setColor( chColorStroke );
                g2d.draw( p2d );
                
            }
            
            g2d.dispose();
            
        }
        
        public void calculateConvexHull() {
            chPoints.clear();
            chPoints.addAll( getConvexHull( points ) );
            repaint();
        }
        
        public void clearAll() {
            points.clear();
            chPoints.clear();
            repaint();
        }
        
        public void generatePoints( int n ) {
            
            clearAll();
            
            for ( int i = 0; i < n; i++ ) {
                points.add( new Point2D.Double( 
                        50 + Math.random() * ( getWidth() - 100 ),
                        50 + Math.random() * ( getHeight() - 100 ) ) );
            }
            
            repaint();
            
        }
        
        public void addPoint( double x, double y ) {
            points.add( new Point2D.Double( x, y ) );
            repaint();
        }
        
    }
    
    private static class MyWindow extends JFrame {
        
        CHPanel chPanel;
        JPanel btnContainer;
        JButton btnClearAll;
        JButton btnGeneratePoints;
        
        MyWindow() {
            
            setTitle( "convex hull GUI test - prof David" );
            setDefaultCloseOperation( EXIT_ON_CLOSE );
            setSize( 900, 900 );
            setLocationRelativeTo( null );
            
            chPanel = new CHPanel();
            btnContainer = new JPanel();
            
            btnGeneratePoints = new JButton( "generate points" );
            btnClearAll = new JButton( "clear all points" );
            
            btnContainer.add( btnGeneratePoints );
            btnContainer.add( btnClearAll );
            
            btnGeneratePoints.addActionListener( new ActionListener() {
                @Override
                public void actionPerformed( ActionEvent e ) {
                    
                    String v = JOptionPane.showInputDialog( chPanel, "How many points?" );
                    
                    try {
                        
                        int p = Integer.parseInt( v );
                        
                        if ( p < 3 ) {
                            JOptionPane.showMessageDialog( chPanel, 
                                "you need at least 3 points!", 
                                "ERROR", JOptionPane.ERROR_MESSAGE );
                        } else {
                            chPanel.generatePoints( p );
                            chPanel.calculateConvexHull();
                        }
                        
                    } catch ( NumberFormatException exc ) {
                        JOptionPane.showMessageDialog( chPanel, 
                                "you need to input an integer!", 
                                "ERROR", JOptionPane.ERROR_MESSAGE );
                    }
                    
                }
            });
            
            btnClearAll.addActionListener( new ActionListener() {
                @Override
                public void actionPerformed( ActionEvent e ) {
                    chPanel.clearAll();
                }
            });
            
            chPanel.addMouseListener( new MouseAdapter() {
                @Override
                public void mouseReleased( MouseEvent e ) {
                    chPanel.addPoint( e.getX(), e.getY() );
                    if ( chPanel.points.size() >= 3 ) {
                        chPanel.calculateConvexHull();
                    }
                }
            });
            
            add( chPanel, BorderLayout.CENTER );
            add( btnContainer, BorderLayout.SOUTH );
            
        }
        
    }
    
    public static void main( String[] args ) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for ( javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels() ) {
                if ( "Nimbus".equals( info.getName() ) ) {
                    javax.swing.UIManager.setLookAndFeel( info.getClassName() );
                    break;
                }
            }
        } catch ( ClassNotFoundException ex ) {
            java.util.logging.Logger.getLogger( MyWindow.class.getName() ).log( java.util.logging.Level.SEVERE, null, ex );
        } catch ( InstantiationException ex ) {
            java.util.logging.Logger.getLogger( MyWindow.class.getName() ).log( java.util.logging.Level.SEVERE, null, ex );
        } catch ( IllegalAccessException ex ) {
            java.util.logging.Logger.getLogger( MyWindow.class.getName() ).log( java.util.logging.Level.SEVERE, null, ex );
        } catch ( javax.swing.UnsupportedLookAndFeelException ex ) {
            java.util.logging.Logger.getLogger( MyWindow.class.getName() ).log( java.util.logging.Level.SEVERE, null, ex );
        }
        //</editor-fold>
        java.awt.EventQueue.invokeLater( new Runnable() {
            public void run() {
                new MyWindow().setVisible( true );
            }
        });
    }
    
}
