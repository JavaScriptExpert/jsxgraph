#import <UIKit/UIKit.h>

@interface AppDelegate_Pad : NSObject  {
    UIWindow *window;
    UIWebView *webView;	// Add UIWebView and outlet below
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UIWebView *webView;
@end