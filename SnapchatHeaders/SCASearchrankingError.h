//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserNotTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber;

@interface SCASearchrankingError : SCAUserNotTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *searchErrorCode;
    long long searchErrorType;
    long long source;
    long long searchMediaType;
    long long mediaType;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (long long)getMediaType;
- (void)setMediaType:(long long)arg1;
- (long long)getSearchMediaType;
- (void)setSearchMediaType:(long long)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getSearchErrorType;
- (void)setSearchErrorType:(long long)arg1;
- (long long)getSearchErrorCode;
- (void)setSearchErrorCode:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
