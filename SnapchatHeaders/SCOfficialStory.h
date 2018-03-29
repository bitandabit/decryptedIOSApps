//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "SCSendConfirmationViewNamedRecipient-Protocol.h"

@class NSString, SCProfileImages, SOJUVerifiedUsersVerifiedSharedPublication;

@interface SCOfficialStory : NSObject <NSCoding, NSCopying, SCSendConfirmationViewNamedRecipient>
{
    SOJUVerifiedUsersVerifiedSharedPublication *_story;
    NSString *_snaptag;
    SCProfileImages *_profileImages;
}

@property(readonly, nonatomic) SCProfileImages *profileImages; // @synthesize profileImages=_profileImages;
@property(copy, nonatomic) NSString *snaptag; // @synthesize snaptag=_snaptag;
@property(retain, nonatomic) SOJUVerifiedUsersVerifiedSharedPublication *story; // @synthesize story=_story;
- (void).cxx_destruct;
- (id)sendConfirmationDisplayName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPublication:(id)arg1;

@end
