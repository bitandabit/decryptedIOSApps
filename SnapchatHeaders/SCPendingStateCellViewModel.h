//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBaseChatCellViewModel.h"

#import "SCPendingChatCellViewConfig-Protocol.h"

@class NSString;

@interface SCPendingStateCellViewModel : SCBaseChatCellViewModel <SCPendingChatCellViewConfig>
{
    NSString *_recipient;
    long long _pendingSnapNum;
    long long _pendingChatNum;
}

+ (id)pendingLabelColor;
+ (id)pendingLabelFont;
@property(readonly, nonatomic) long long pendingChatNum; // @synthesize pendingChatNum=_pendingChatNum;
@property(readonly, nonatomic) long long pendingSnapNum; // @synthesize pendingSnapNum=_pendingSnapNum;
@property(readonly, copy, nonatomic) NSString *recipient; // @synthesize recipient=_recipient;
- (void).cxx_destruct;
- (id)textforPendingNotificationLabel;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isReleaseByCurrentUser;
- (_Bool)shouldDisplayBelowFoldInChat;
- (id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)reusableCellIdentifier;
- (double)heightWithBottomPadding:(_Bool)arg1 cellHeightCache:(id)arg2;
- (id)initWithProps:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

