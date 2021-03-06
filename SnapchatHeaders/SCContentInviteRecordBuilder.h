//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface SCContentInviteRecordBuilder : NSObject
{
    NSString *_contentInviteId;
    NSString *_recipientPhoneNumber;
    NSString *_recipientDisplayName;
    NSDate *_lastInteractionTimestamp;
    NSDictionary *_contentInviteSnaps;
}

+ (id)withContentInviteRecord:(id)arg1;
- (void).cxx_destruct;
- (id)setContentInviteSnaps:(id)arg1;
- (id)setLastInteractionTimestamp:(id)arg1;
- (id)setRecipientDisplayName:(id)arg1;
- (id)setRecipientPhoneNumber:(id)arg1;
- (id)setContentInviteId:(id)arg1;
- (id)build;

@end

