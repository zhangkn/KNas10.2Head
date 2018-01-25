//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ASUpdatesPage : NSObject
{
    NSArray *_sections;
}

@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) NSArray *items;
@property(readonly, nonatomic) NSArray *availableItems;
- (void)_renderSectionsWithClientContext:(id)arg1 timezoneOffset:(double)arg2 availableUpdates:(id)arg3 installedByDate:(id)arg4;
- (id)initWithUpdates:(id)arg1 clientContext:(id)arg2;
- (id)initWithSoftwareUpdates:(id)arg1 clientContext:(id)arg2;

@end
