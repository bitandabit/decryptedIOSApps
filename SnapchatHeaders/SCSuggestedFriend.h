//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCFilterableProtocol-Protocol.h"

@class NSString;

@interface SCSuggestedFriend : NSObject <SCFilterableProtocol>
{
    NSString *_display;
    NSString *_name;
    NSString *_userId;
    NSString *_suggestReasonDisplay;
    NSString *_suggestReasonDisplayLowercase;
    NSString *_suggestionToken;
    NSString *_bitmojiAvatarId;
    NSString *_bitmojiSelfieId;
}

+ (_Bool)shouldFilterNotification:(id)arg1 withName:(id)arg2 forPageType:(unsigned long long)arg3;
+ (id)initWithSuggestedFriendInformation:(id)arg1 displayInformation:(id)arg2;
+ (id)suggestedFriendWithFriend:(id)arg1 suggestion:(id)arg2;
+ (id)suggestedFriendWithFriend:(id)arg1;
+ (id)suggestedFriendWithSearchPersonViewModel:(id)arg1;
@property(copy, nonatomic) NSString *bitmojiSelfieId; // @synthesize bitmojiSelfieId=_bitmojiSelfieId;
@property(retain, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(retain, nonatomic) NSString *suggestionToken; // @synthesize suggestionToken=_suggestionToken;
@property(retain, nonatomic) NSString *suggestReasonDisplayLowercase; // @synthesize suggestReasonDisplayLowercase=_suggestReasonDisplayLowercase;
@property(retain, nonatomic) NSString *suggestReasonDisplay; // @synthesize suggestReasonDisplay=_suggestReasonDisplay;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *display; // @synthesize display=_display;
- (void).cxx_destruct;
- (_Bool)matches:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
