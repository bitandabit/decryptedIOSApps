//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary;

@interface SCChecksums : NSObject <NSCoding>
{
    NSDictionary *_checksums;
    long long _missingReason;
}

@property(readonly, nonatomic) long long missingReason; // @synthesize missingReason=_missingReason;
@property(readonly, copy, nonatomic) NSDictionary *checksums; // @synthesize checksums=_checksums;
- (void).cxx_destruct;
- (_Bool)isStoriesChecksumsMissing;
- (id)allUpdatesChecksumsString;
- (id)checksumForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithChecksums:(id)arg1 missingReason:(long long)arg2;

@end

