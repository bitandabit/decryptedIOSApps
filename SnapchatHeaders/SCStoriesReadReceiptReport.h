//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStoriesReadReceiptReport : SCDocObject <NSCopying>
{
    _Bool _isSnapSaved;
    _Bool _isPublic;
    _Bool _isOfficial;
    _Bool _isFriend;
    NSString *_receiptId;
    long long _state;
    double _viewedTimestamp;
    long long _screenshotCount;
    double _expirationDate;
}

+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (id)immutableObjectParse:(const void *)arg1;
+ (const char *)table;
@property(readonly, nonatomic) double expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) _Bool isFriend; // @synthesize isFriend=_isFriend;
@property(readonly, nonatomic) _Bool isOfficial; // @synthesize isOfficial=_isOfficial;
@property(readonly, nonatomic) _Bool isPublic; // @synthesize isPublic=_isPublic;
@property(readonly, nonatomic) long long screenshotCount; // @synthesize screenshotCount=_screenshotCount;
@property(readonly, nonatomic) _Bool isSnapSaved; // @synthesize isSnapSaved=_isSnapSaved;
@property(readonly, nonatomic) double viewedTimestamp; // @synthesize viewedTimestamp=_viewedTimestamp;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *receiptId; // @synthesize receiptId=_receiptId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReceiptId:(id)arg1 state:(long long)arg2 viewedTimestamp:(double)arg3 isSnapSaved:(_Bool)arg4 screenshotCount:(long long)arg5 isPublic:(_Bool)arg6 isOfficial:(_Bool)arg7 isFriend:(_Bool)arg8 expirationDate:(double)arg9;

@end

