//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFriendActionButton.h"

@class SCReplyParameters;
@protocol SendSnapNavigationControllerDelegate;

@interface SCFriendSnapActionButton : SCFriendActionButton
{
    id <SendSnapNavigationControllerDelegate> _sendSnapNavigationControllerDelegate;
    SCReplyParameters *_replyParameters;
}

- (void).cxx_destruct;
- (void)handleButtonPressed;
- (void)updateWithFriendActionButtonsGroupConfiguration:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2 replyParameters:(id)arg3 sendSnapNavigationControllerDelegate:(id)arg4;

@end
