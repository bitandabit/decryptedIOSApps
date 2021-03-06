//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCSnapchattersContactSnapchatterInfo, SCSnapchattersIncomingFriendInfo, SCSnapchattersSuggestedSnapchatterInfo;

@interface SCSnapchattersNonFriendInfo : NSObject <NSCopying>
{
    _Bool _isIncoming;
    _Bool _isSuggested;
    _Bool _isContact;
    SCSnapchattersIncomingFriendInfo *_incomingFriendInfo;
    SCSnapchattersSuggestedSnapchatterInfo *_suggestedSnapchatterInfo;
    SCSnapchattersContactSnapchatterInfo *_contactSnapchatterInfo;
}

@property(readonly, copy, nonatomic) SCSnapchattersContactSnapchatterInfo *contactSnapchatterInfo; // @synthesize contactSnapchatterInfo=_contactSnapchatterInfo;
@property(readonly, copy, nonatomic) SCSnapchattersSuggestedSnapchatterInfo *suggestedSnapchatterInfo; // @synthesize suggestedSnapchatterInfo=_suggestedSnapchatterInfo;
@property(readonly, copy, nonatomic) SCSnapchattersIncomingFriendInfo *incomingFriendInfo; // @synthesize incomingFriendInfo=_incomingFriendInfo;
@property(readonly, nonatomic) _Bool isContact; // @synthesize isContact=_isContact;
@property(readonly, nonatomic) _Bool isSuggested; // @synthesize isSuggested=_isSuggested;
@property(readonly, nonatomic) _Bool isIncoming; // @synthesize isIncoming=_isIncoming;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIsIncoming:(_Bool)arg1 isSuggested:(_Bool)arg2 isContact:(_Bool)arg3 incomingFriendInfo:(id)arg4 suggestedSnapchatterInfo:(id)arg5 contactSnapchatterInfo:(id)arg6;

@end

