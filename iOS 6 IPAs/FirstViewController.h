//
//  FirstViewController.h
//  iOS 6 IPAs
//
//  Created by Jia Jian on 4/11/15.
//  Copyright (c) 2015 JJGadgets. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FirstViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIWebView *webView;

- (IBAction)loadurlAction:(id)sender;
//- (IBAction)loadHtmlAction:(id)sender;
//- (IBAction)loadDataAction:(id)sender;

@end

