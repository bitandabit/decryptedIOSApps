//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCChatGroup, SCNamedFriend;

@protocol SCSendConfirmationViewControllerDelegate <NSObject>
- (void)didPressSend;

@optional
- (void)didFinishUpdatingSendConfirmationBar;
- (void)didPressMischief:(id <SCChatGroup>)arg1;
- (void)didPressRecipient:(id <SCNamedFriend>)arg1;
- (void)didPressMyGallery;
- (void)didPressMyStory;
- (void)didPressSendConfirmationBar;
@end

