//
//  AppController.h
//  AMSerialTest
//

#import <Cocoa/Cocoa.h>
#import <AMSerial/AMSerial.h>

@interface AppController : NSObject <AMSerialPortReadDelegate> {
	IBOutlet NSTextField *inputTextField;
	IBOutlet NSTextField *deviceTextField;
	IBOutlet NSTextView *outputTextView;
	AMSerialPort *port;
}
@property (nonatomic, retain) AMSerialPort* port;

- (IBAction)listDevices:(id)sender;
- (IBAction)chooseDevice:(id)sender;
- (IBAction)send:(id)sender;
@end
