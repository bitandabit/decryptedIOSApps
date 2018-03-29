//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCProfileV3CellController.h"

#import "SCProfileV3ProfileCompletionCellViewDelegate-Protocol.h"

@class SCUserSession;
@protocol SCStartChatDelegate, SendSnapNavigationControllerDelegate;

@interface SCProfileV3VerifyYourPhoneNumberCellController : SCProfileV3CellController <SCProfileV3ProfileCompletionCellViewDelegate>
{
    SCUserSession *_userSession;
    id <SCStartChatDelegate> _startChatDelegate;
    id <SendSnapNavigationControllerDelegate> _sendSnapNavigationControllerDelegate;
}

+ (_Bool)shouldDisplay:(id)arg1;
+ (_Bool)shouldBadge:(id)arg1;
- (void).cxx_destruct;
- (void)_dismissCell;
- (void)cellWasDismissed:(id)arg1;
- (void)cellWasTapped:(id)arg1;
- (id)getAnalyitcsSections;
- (struct CGSize)sizeForCell;
- (Class)cellClass;
- (id)cellReuseIdentifier;
- (void)attachCellView:(id)arg1;
- (id)initWithUserSession:(id)arg1 startChatDelegate:(id)arg2 sendSnapNavigationControllerDelegate:(id)arg3;

@end
