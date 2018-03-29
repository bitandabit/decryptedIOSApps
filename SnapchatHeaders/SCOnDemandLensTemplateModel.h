//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCOnDemandLensTemplateModel-Protocol.h"

@class NSString, SOJUUnlockablesOndemandTemplateCategory;

@interface SCOnDemandLensTemplateModel : NSObject <SCOnDemandLensTemplateModel>
{
    SOJUUnlockablesOndemandTemplateCategory *_templateCategory;
    long long _templateIndex;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, nonatomic) long long templateIndex; // @synthesize templateIndex=_templateIndex;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandTemplateCategory *templateCategory; // @synthesize templateCategory=_templateCategory;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setSInt64:(long long)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTemplateCategory:(id)arg1 templateIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

