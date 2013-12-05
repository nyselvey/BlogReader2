//
//  WebViewController.h
//  BlogReader2
//
//  Created by Natasha Selvey on 11/4/13.
//  Copyright (c) 2013 Natasha. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController

@property (strong, nonatomic) NSURL *blogPostURL;

@property (strong, nonatomic) IBOutlet UIWebView *webView;

@end



