//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUIdentitySuggestedFriendDisplayInformation-Protocol.h"

@class NSString;

@interface SOJUIdentitySuggestedFriendDisplayInformation : NSObject <SOJUIdentitySuggestedFriendDisplayInformation>
{
    NSString *_userId;
    NSString *_suggestionSubtext;
    NSString *_suggestionToken;
    NSString *_suggestionSubtextLowercase;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *suggestionSubtextLowercase; // @synthesize suggestionSubtextLowercase=_suggestionSubtextLowercase;
@property(readonly, copy, nonatomic) NSString *suggestionToken; // @synthesize suggestionToken=_suggestionToken;
@property(readonly, copy, nonatomic) NSString *suggestionSubtext; // @synthesize suggestionSubtext=_suggestionSubtext;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUserId:(id)arg1 suggestionSubtext:(id)arg2 suggestionToken:(id)arg3 suggestionSubtextLowercase:(id)arg4;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
