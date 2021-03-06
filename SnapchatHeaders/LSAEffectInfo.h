//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface LSAEffectInfo : NSObject
{
    _Bool _isThirdParty;
    _Bool _hasWaterMark;
    NSString *_effectId;
    NSString *_contentPath;
}

@property(readonly) _Bool hasWaterMark; // @synthesize hasWaterMark=_hasWaterMark;
@property(readonly) _Bool isThirdParty; // @synthesize isThirdParty=_isThirdParty;
@property(readonly, copy) NSString *contentPath; // @synthesize contentPath=_contentPath;
@property(readonly, copy) NSString *effectId; // @synthesize effectId=_effectId;
- (void).cxx_destruct;
- (id)initWithEffectId:(id)arg1 contentPath:(id)arg2 isThirdParty:(_Bool)arg3 hasWaterMark:(_Bool)arg4;
- (id)initWithEffectId:(id)arg1 contentPath:(id)arg2;
- (id)initWithEffectId:(id)arg1;

@end

