//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIItemTableViewCell.h>

@class ASPurchasedCellLayout;

@interface ASBasePurchasedTableViewCell : SKUIItemTableViewCell
{
    ASPurchasedCellLayout *_layout;
}

@property(readonly, nonatomic) ASPurchasedCellLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (void)configureForItem:(id)arg1 clientContext:(id)arg2 rowIndex:(long long)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

