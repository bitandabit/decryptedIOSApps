//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUSnapData-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUInviteSnapData <NSObject, NSCoding, NSCopying, SOJUSnapData>
@property(readonly, copy, nonatomic) NSString *deepLinkUrl;
@property(readonly, copy, nonatomic) NSString *invitedRecipientId;
@property(readonly, copy, nonatomic) NSNumber *pending;
@property(readonly, copy, nonatomic) NSNumber *timestamp;
@property(readonly, copy, nonatomic) NSString *idValue;
@end
