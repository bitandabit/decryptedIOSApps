//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCReplyParameters, UIViewController;
@protocol SCStartChatDelegate, SendSnapNavigationControllerDelegate;

@protocol SCQuickAddControllerDataSrouce <NSObject>
- (SCReplyParameters *)replyParametersForName:(NSString *)arg1;
- (UIViewController *)quickAddControllerParentViewController;
- (id <SendSnapNavigationControllerDelegate>)sendSnapNavigationControllerDelegateForQuickAddController;
- (id <SCStartChatDelegate>)startChatDelegate;

@optional
- (_Bool)hasScrollBar;
@end

