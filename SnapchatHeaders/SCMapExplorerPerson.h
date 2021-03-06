//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMapPerson.h"

#import "NSCopying-Protocol.h"
#import "SCChatGroupParticipant-Protocol.h"

@class NSArray, NSNumber, NSString, UIColor;

@interface SCMapExplorerPerson : SCMapPerson <SCChatGroupParticipant, NSCopying>
{
    _Bool _hasShadow;
    NSArray *_locations;
    NSString *_statusId;
    NSString *_nonClusteredStickerId;
    NSString *_clusteredFacingLeftStickerId;
    NSString *_clusteredFacingRightStickerId;
    unsigned long long _pathStyle;
    long long _animationStyle;
    NSString *_locality;
}

+ (id)locationFromSPCGPoint:(id)arg1;
+ (id)peopleFromSCMEExplorerFriendStatus:(id)arg1;
@property(readonly, copy, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(readonly, nonatomic) long long animationStyle; // @synthesize animationStyle=_animationStyle;
@property(readonly, nonatomic) unsigned long long pathStyle; // @synthesize pathStyle=_pathStyle;
@property(readonly, nonatomic) _Bool hasShadow; // @synthesize hasShadow=_hasShadow;
@property(readonly, copy, nonatomic) NSString *clusteredFacingRightStickerId; // @synthesize clusteredFacingRightStickerId=_clusteredFacingRightStickerId;
@property(readonly, copy, nonatomic) NSString *clusteredFacingLeftStickerId; // @synthesize clusteredFacingLeftStickerId=_clusteredFacingLeftStickerId;
@property(readonly, copy, nonatomic) NSString *nonClusteredStickerId; // @synthesize nonClusteredStickerId=_nonClusteredStickerId;
@property(readonly, copy, nonatomic) NSString *statusId; // @synthesize statusId=_statusId;
@property(readonly, nonatomic) NSArray *locations; // @synthesize locations=_locations;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)nameToDisplayWithUsernameIfNecessary;
- (id)nameToDisplay;
@property(readonly, nonatomic) unsigned long long mischiefVersion;
@property(readonly, copy, nonatomic) NSNumber *talkSessionUserId;
@property(readonly, copy, nonatomic) UIColor *color;
- (void)_setStickerDefaultsIfNecessary;
- (id)initWithFriend:(id)arg1 locations:(id)arg2 statusId:(id)arg3 sticker:(id)arg4 pathStyle:(unsigned long long)arg5 animationStyle:(long long)arg6 locality:(id)arg7;
- (id)initWithUser:(id)arg1 locations:(id)arg2 statusId:(id)arg3 sticker:(id)arg4 pathStyle:(unsigned long long)arg5 animationStyle:(long long)arg6 locality:(id)arg7;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarId;
@property(readonly, copy, nonatomic) NSString *bitmojiSelfieId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *userId;
@property(readonly, copy, nonatomic) NSString *username;

@end

