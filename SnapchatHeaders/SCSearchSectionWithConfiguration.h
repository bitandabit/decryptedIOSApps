//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol NSCopying, SCSearchCollectionViewSection;

@interface SCSearchSectionWithConfiguration : NSObject
{
    id <SCSearchCollectionViewSection> _section;
    NSObject<NSCopying> *_configuration;
}

@property(readonly, copy, nonatomic) NSObject<NSCopying> *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) id <SCSearchCollectionViewSection> section; // @synthesize section=_section;
- (void).cxx_destruct;
- (id)initWithSection:(id)arg1 configuration:(id)arg2;

@end

