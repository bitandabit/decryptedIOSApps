//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSString, NSURL, SCUserSession, UIViewController;

@protocol SCChatSDKActionContextProtocol
- (SCUserSession *)userSession;
- (void)operaDidDisappear;
- (void)operaWillAppear;
- (UIViewController *)presentingViewController;
- (void)followDeepLinkWithUrl:(NSURL *)arg1 additionalInfo:(NSDictionary *)arg2;
- (void)preserveMessageForMessageId:(NSString *)arg1 conversationId:(NSString *)arg2;
@end
