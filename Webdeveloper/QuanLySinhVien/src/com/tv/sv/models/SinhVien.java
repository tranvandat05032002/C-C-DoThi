package com.tv.sv.models;

public class SinhVien extends SinhVienMethod {
	private String maSinhVien;
	private String hoDem;
	private String ten;
	private boolean gioiTinh;
	private int maNganh;
	private String ngaySinh;
	public SinhVien(String maSinhVien, String hoDem, String ten, boolean gioiTinh, int maNganh, String ngaySinh){
		this.maSinhVien = maSinhVien;
		this.hoDem = hoDem;
		this.ten = ten;
		this.gioiTinh = gioiTinh;
		this.maNganh = maNganh;
		this.ngaySinh = ngaySinh;
	}
	public int getManganhHoc() {
		return this.maNganh;
	}
	public String getThongTin() {
		
		return this.maSinhVien + "\t\t" + this.hoDem + " " + this.ten + "\t" + this.gioiTinh + "\t\t" + this.ngaySinh;
	}
}
