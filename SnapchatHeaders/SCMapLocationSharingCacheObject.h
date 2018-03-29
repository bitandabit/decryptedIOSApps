//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSString, SCMTGetShareLocationPreferencesResponse;

@interface SCMapLocationSharingCacheObject : NSObject <NSCoding, NSCopying>
{
    _Bool _needsSync;
    SCMTGetShareLocationPreferencesResponse *_locationPreferencesResponse;
    NSDate *_locationPreferencesResponseDate;
    NSString *_userId;
}

@property(readonly, nonatomic) _Bool needsSync; // @synthesize needsSync=_needsSync;
@property(readonly, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) NSDate *locationPreferencesResponseDate; // @synthesize locationPreferencesResponseDate=_locationPreferencesResponseDate;
@property(readonly, nonatomic) SCMTGetShareLocationPreferencesResponse *locationPreferencesResponse; // @synthesize locationPreferencesResponse=_locationPreferencesResponse;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocationPreferencesResponse:(id)arg1 responseDate:(id)arg2 userId:(id)arg3 needsSync:(_Bool)arg4;

@end

