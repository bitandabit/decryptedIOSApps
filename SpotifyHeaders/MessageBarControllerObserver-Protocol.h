//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MessageBarController, UIViewController;

@protocol MessageBarControllerObserver <NSObject>

@optional
- (void)messageBarController:(MessageBarController *)arg1 willChangeContentInset:(struct UIEdgeInsets)arg2;
- (void)messageBarController:(MessageBarController *)arg1 didChangeToContentViewController:(UIViewController *)arg2;
- (void)messageBarController:(MessageBarController *)arg1 willChangeToContentViewController:(UIViewController *)arg2;
@end

