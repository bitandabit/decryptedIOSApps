//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierCollectionEntityCellConfigurator.h"

@class NSString, SPTFreeTierCollectionEntityRowStyle;

@interface SPTFreeTierCollectionEntityCellConfiguratorImplementation : NSObject <SPTFreeTierCollectionEntityCellConfigurator>
{
    id <GLUEImageLoader> _glueImageLoader;
    SPTFreeTierCollectionEntityRowStyle *_style;
}

@property(retain, nonatomic) SPTFreeTierCollectionEntityRowStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
- (void).cxx_destruct;
- (void)setupLeadingAccessoryForCell:(id)arg1 withViewModel:(id)arg2;
- (void)setupTrailingAccessoryForCell:(id)arg1 withViewModel:(id)arg2;
- (void)setupContentViewForCell:(id)arg1;
- (void)configureCell:(id)arg1 withViewModel:(id)arg2;
@property(readonly, nonatomic) double preferredCellHeight;
- (id)initWithImageLoader:(id)arg1 style:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
